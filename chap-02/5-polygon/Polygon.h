#pragma once

#include <ostream>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);

public:
    void          add_vertex(int x, int y);
    const Vertex& get_vertex(size_t index) const;

private:
    std::vector<Vertex> _vertices;
};
