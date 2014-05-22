#pragma once

namespace principia {
namespace geometry {

// Point<Vector> is an affine space on the vector space Vector. Vector should
// be equipped with operators +, -, +=, -=, ==, !=, as well as Vector * Weight
// and Vector / Weight for any Weight used in Barycentre.
template<typename Vector>
class Point {
 public:
  Point() = default;
  explicit Point(Vector const& coordinates);
  ~Point() = default;

  Vector operator-(Point<Vector> const& from) const;

  Point operator+(Vector const& translation) const;
  Point operator-(Vector const& translation) const;

  Point& operator+=(Vector const& translation);
  Point& operator-=(Vector const& translation);

  bool operator==(Point const& right) const;
  bool operator!=(Point const& right) const;

  template<typename Vector>
  friend Point<Vector> operator+(Vector const& translation,
                                 Point<Vector> const& point);

  template<typename Vector, typename Weight>
  friend Point<Vector> Barycentre(Point<Vector> const& left,
                                  Weight const& left_weight,
                                  Point<Vector> const& right,
                                  Weight const& right_weight);

 private:
  Vector coordinates_;
};

template<typename Vector>
Point<Vector> operator+(Vector const& translation,
                        Point<Vector> const& point);

template<typename Vector, typename Weight>
Point<Vector> Barycentre(Point<Vector> const& left,
                         Weight const& left_weight,
                         Point<Vector> const& right,
                         Weight const& right_weight);

}  // namespace geometry
}  // namespace principia

#include "geometry/point_body.hpp"