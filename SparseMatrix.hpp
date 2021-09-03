class SparseMatrix
{
    private: 
        int** originalMatrix;
        int rowLength;
        int columnLength;
        int nonZeros; 
        int** array;

    public:
        SparseMatrix(int** matrix, int amtOfRows, int amtOfColumns);
        int** changeArrayIntoMatrix();
        void changeSparseIntoArray();
        int findNonZeros();
        void printArray();

};