#pragma once

namespace perception {
namespace base {

enum class ObjectTypes {
    pedestrian = 0,
    car = 4,
    cyclist = 2,

    obstacle = -1,
};

struct Box3D {
    Box3D() : x(0), y(0), z(0), l(0), h(0), w(0) {}
    
    float x;
    float y;
    float z;
    float l;
    float h;
    float w;

    float theta;
};

struct Object3D
{
    Box3D box;
    ObjectTypes cls;
    
    float score;
    int trackID;
    bool isDrop; // for nms
    float distX; 
    float distY;
    float velX;
    float velY;
    float timestamp;
};


} // namespace base
} // namespace perception