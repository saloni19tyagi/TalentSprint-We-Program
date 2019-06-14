#include <iostream>
#include<vector>

using namespace std;

vector<pair<int, int> >termius(int x , int y  , vector<string>points) {
    string x1 , dir = "";
    int digit = 0;
    for (int i = 0; i < points.size(); i++) {
        x1 = points[i];
        digit = 0;
        dir = "";
        for (int i = 0; i < x1.size(); i++) {
            if (x1[i] >= 48 && x1[i] <= 57)
                digit = digit * 10 + (x1[i] - '0');
            else 
                dir += x1[i];
        }

       // cout << digit << " " << dir << " " << "\n" ;
        if(dir == "N")
            y = y + digit;
        else if(dir == "S")
            y = y - digit;
        else if(dir == "E")
            x = x + digit;
        else if(dir == "W")
            x = x - digit;
        else if(dir == "NE") {
            x+=digit;
            y+=digit;
        }
        else if(dir == "NW") {
            x -= digit;
            y += digit;
        }
        else if(dir == "SE") {
            x += digit;
            y -= digit;
        }
        else {
            x-=digit ;
            y-=digit ;
        }
    //    cout << x << " " << y << "\n" ;
    }
    vector<pair<int, int> >final_point ;
    final_point.push_back(make_pair(x, y)) ;
    return final_point ;
}

int main() {
	
	vector<string>points ;
    points.push_back("1NE") ;
    points.push_back("3NW");

    vector<pair<int, int> >final_point = termius(1, 1, points);
    cout << "( " << final_point[0].first << "," << final_point[0].second << " ) " << "\n" ;

}