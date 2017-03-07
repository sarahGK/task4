// 1296 classes for phi/psi by dividing X-axis and Y-axis of Ramachandran plot by 10 degree(36*36)
#define LA 1296
const char rname_one_rank20[21]="ACDEFGHIKLMNPQRSTVWY";
// define a class for all the conditional probabilities
// It's for entropy evaluation and probability term for the weighted function
class data{
private:
	double sa[LA][20];	//p(si|ai-1)
	double sb[LA][20];	//p(si|ai)
	double sc[LA][20];	//p(si|ai+1)
	vector<vector<double>> sd;//p(si|si-1)
	vector<vector<double>> se;//p(si|si+1)
	double sf[LA][3];	//p(si|chi-1)
	double sg[LA][3];	//p(si|chi)
	double sh[LA][3];	//p(si|chi+1)
	bool mark[8];		// True if the according condition taken, otherwise false
public:
	data();
	void set_data(int s,int a,int b,int c,int d,int e, int f, int g, int h);//count
	void set_data(double **dataarray,int length,int no);			//calculate probabilistic value for 2D array
	void set_data(vector<vector<double>> & de,int no);			//calculate probabilistic value for vector
	void readfile(ifstream &f1,ifstream &f2);				//read data
	void print_data(ostream & of);						//print the value of mark

};
