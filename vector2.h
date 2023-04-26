#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include <iostream>

template<typename T>
struct Vector2
{
    T x,y;
    Vector2<T>& operator+=(Vector2<T> const& v){
        x += v.x;
        y += v.y;
        return *this;
    }
    Vector2<T>& operator*=( T const& scalar){
        x *= scalar;
        y *= scalar;
        return *this;
    }
    Vector2<T>& operator/=( T const& scalar){
        x /= scalar;
        y /= scalar;
        return *this;
    }
};

template<typename T>
Vector2<T> operator*(Vector2<T> const& v, T const & scalar){
    return Vector2<T>{v.x * scalar, v.y * scalar};
}
template<typename T>
Vector2<T> operator*(T const & scalar, Vector2<T> const& v){
    return v * scalar;
}

template<typename T>
Vector2<T> operator/(Vector2<T> const& v, T const & scalar){
    return Vector2<T>{v.x / scalar, v.y / scalar};
}


template<typename T>
std::ostream& operator<<( std::ostream& o, Vector2<T> const& v)
{
    o << v.x << " " << v.y << "\n";
    return o;
}
template<typename T>
std::istream& operator>>( std::istream& i, Vector2<T>& v)
{
    i >> v.x;
    i >> v.y;
    return i;
}

template<typename T>
Vector2<T> operator+(Vector2<T> const& v1,Vector2<T> const& v2)
{
    return Vector2<T>{v1.x + v2.x, v1.y + v2.y};
}
template<typename T>
T dot (Vector2<T> const& v1, Vector2<T> const& v2){
    return (v1.x * v2.x ) + (v1.y * v2.y);
}
template<typename T>
double length(Vector2<T> const& v){
    return sqrt(pow(v.x,2)+pow(v.y,2));
}
template<typename T>
double sqlength(Vector2<T> const& v){
    return pow(length<T>(v),2);
}
template<typename T >
Vector2<T> normalize(Vector2<T> const& v){
    return Vector2<T>{(v.x /length(v) ),(v.y / length(v))};
}

#endif