#include "Matrix.h"
//#include "AffineTransform.h"
//#include "Model2D.h"
#include "AffineTransform3D.h"
#include "Model3D.h"
#include "Vector3D.h"

using namespace std;

void main()
{
	Vector3D v1(1, 2, 3), v2(2, 4, 5);
	cout << v1 << endl << v2 << endl;
	cout << v1 * 5 << endl << v1 * v2 << endl << v1 % v2 << endl;
	/*double v[16] = {
		2, 4, 4, 12,
		5, -2, 6, 13, 
		1, 3, 5, 13,
		1, 1, 1, 1
	};
	Matrix<> V(4, 4, v);
	int f[6] = { 
		1, 2, 3, 
		2, 4, 3
	};
	Matrix<int> F (2, 3, f);
	Model3D model(V, F);
	cout
		<< endl << "Faces:" << endl << model.GetFaces()
		<< endl << "Edges:" << endl << model.GetEdges()
		<< endl << "Vertices before AT:" << endl << model.GetVertices();
	model.Apply(Translation(1, 2, 3));
	cout
		<< endl << "Vertices after AT:" << endl << model.GetVertices();*/

	system("pause");
}
