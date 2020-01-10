#ifndef D_OCTAGON_H
#define D_OCTAGON_H 1

#include "figure.h"
#include "builder.h"

struct octagon : figure {
    octagon(const std::array<vertex, 8>& vertices);
    void setColor(std::vector<int> color);

    void render(const sdl::renderer& renderer) const override;

    void save(std::ostream& os) const override;
  
private:
    std::array<vertex, 8> vertices_;
    std::vector<int> color_;

};

struct octagon_builder : builder {
    std::unique_ptr<figure> add_vertex(const vertex& v);
    std::string getType();

private:
    int32_t n_ = 0;
    std::array<vertex, 8> vertices_;

};

#endif