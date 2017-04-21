
#ifndef LAB_4_ANGLE_ON_PLANE_H
#define LAB_4_ANGLE_ON_PLANE_H


class Angle_on_plane {
private:
    unsigned int degrees;
    unsigned int minutes;
public:
    Angle_on_plane();
    Angle_on_plane(int, double);
    ~Angle_on_plane();
    void print_value_degree();
    float degree_to_radians();
    float from_0_to_360();
    Angle_on_plane operator +(Angle_on_plane degr);
    Angle_on_plane operator -(Angle_on_plane degr);
    bool operator ==(const Angle_on_plane &) const;
    bool operator !=(const Angle_on_plane &) const;
    bool operator <(const Angle_on_plane &) const;
    bool operator <=(const Angle_on_plane &) const;
    bool operator >(const Angle_on_plane &) const;
    bool operator >=(const Angle_on_plane &) const;
};


#endif //LAB_4_ANGLE_ON_PLANE_H
