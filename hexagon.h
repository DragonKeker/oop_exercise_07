#ifndef D_HEXAGON_H
#define D_HEXAGON_H 1

#include "figure.h"
#include "builder.h"

struct hexagon : figure {
    hexagon(const std::array<vertex, 6>& vertices);
    void setColor(std::vector<int> color);

    void render(const sdl::renderer& renderer) const override;

    void save(std::ostream& os) const override;


private:
    std::array<vertex, 6> vertices_;
    std::vector<int> color_;

};

struct hexagon_builder : builder {
    std::unique_ptr<figure> add_vertex(const vertex& v);
    std::string getType();

private:
    int32_t n_ = 0;
    std::array<vertex, 6> vertices_;

};

#endif
