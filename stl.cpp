#include <iostream>
#include <fstream>
#include <vector>
#include <array>

// Define a structure for a 3D point
struct Point3D {
    float x, y, z;
};

// Define a structure for a triangle, which includes a normal and 3 vertices
struct Triangle {
    Point3D normal;
    Point3D vertices[3];
    uint16_t attribute_byte_count = 0;
};

// Function to write the STL file in binary format
void writeBinarySTL(const std::string& filename, const std::vector<Triangle>& triangles) {
    std::ofstream file(filename, std::ios::binary);

    if (!file) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return;
    }

    // 80-byte header
    char header[80] = {};
    file.write(header, 80);

    // Number of triangles
    uint32_t num_triangles = triangles.size();
    file.write(reinterpret_cast<char*>(&num_triangles), sizeof(num_triangles));

    // Write each triangle
    for (const auto& triangle : triangles) {
        file.write(reinterpret_cast<const char*>(&triangle.normal), sizeof(Point3D));
        file.write(reinterpret_cast<const char*>(&triangle.vertices[0]), sizeof(Point3D));
        file.write(reinterpret_cast<const char*>(&triangle.vertices[1]), sizeof(Point3D));
        file.write(reinterpret_cast<const char*>(&triangle.vertices[2]), sizeof(Point3D));
        file.write(reinterpret_cast<const char*>(&triangle.attribute_byte_count), sizeof(uint16_t));
    }

    file.close();
    std::cout << "STL file written successfully: " << filename << std::endl;
}

int main() {
    // Define the vertices of a cube
    std::array<Point3D, 8> vertices = {{
        {0, 0, 0}, {1, 0, 0}, {1, 1, 0}, {0, 1, 0},
        {0, 0, 1}, {1, 0, 1}, {1, 1, 1}, {0, 1, 1}
    }};

    // Define the 12 triangles (two per face) of the cube
    std::vector<Triangle> triangles = {
        // Bottom face
        {{0, 0, -1}, {vertices[0], vertices[1], vertices[2]}},
        {{0, 0, -1}, {vertices[0], vertices[2], vertices[3]}},
        // Top face
        {{0, 0, 1}, {vertices[4], vertices[5], vertices[6]}},
        {{0, 0, 1}, {vertices[4], vertices[6], vertices[7]}},
        // Front face
        {{0, -1, 0}, {vertices[0], vertices[1], vertices[5]}},
        {{0, -1, 0}, {vertices[0], vertices[5], vertices[4]}},
        // Back face
        {{0, 1, 0}, {vertices[3], vertices[2], vertices[6]}},
        {{0, 1, 0}, {vertices[3], vertices[6], vertices[7]}},
        // Left face
        {{-1, 0, 0}, {vertices[0], vertices[3], vertices[7]}},
        {{-1, 0, 0}, {vertices[0], vertices[7], vertices[4]}},
        // Right face
        {{1, 0, 0}, {vertices[1], vertices[2], vertices[6]}},
        {{1, 0, 0}, {vertices[1], vertices[6], vertices[5]}}
    };

    // Write the cube to an STL file
    writeBinarySTL("cube.stl", triangles);

    return 0;
}
