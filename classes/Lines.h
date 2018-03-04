#include<Vertices.h>

class Line3{
         
         public :// Direction cosines of the line and passing through point
                 float dirx;
                 float diry;
                 float dirz;
                 Vertex3 point;// line passing through this point
         
}

class Line2{
         
         public:// Direction cosines of the line and passing through point
                 float first;
                  float second;
                  char[2] axis;
                  Vertex2 point; // line passing through this point
}
