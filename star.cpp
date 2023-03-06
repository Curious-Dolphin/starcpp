#define xMax 400
#define xStep 20
#define yMax 400
#define yStep 20

struct Node
{
    int fatherX;
    int fatherY;
    float costG;
    float costH; 
    float costF;
    int x;
    int y;

};

inline bool operator < (const Node& lhs, const Node& rhs)
{
    return lhs.costF < rhs.costF;
}

bool isDestination(int x, int y, Node destination) {
    if (x == destination.x && y == destination.y) {
        return true;
    }else{
        return false;
    }
}

bool isValid(int x, int y){
    if(isObstacle(x,y)){
        return false;
    }else if (x>xMax || x<0 ||y>yMax || y<0)
    {
        return false;
    }else{
        return true;
    }
    
}
