#include <iostream>
#include <string>
#include <vector>

// MAKE A FUNCTION WHICH TAKES A WORD THAT WE WANT TO FIND AS A PARAMETER
// SEARCH FOR THE WORD IN THE MATRIX

// TRY TO WORK OUT THE LOGIC
// - WORK OUT LOGIC OF FINDING A WORD MADE UP OF CHARS IN A SINGLE ROW / VECTOR
// -> function will take in a word we want to find
// -> create a string initialized as "" which gets appended to with the chars [i][j]
// --> i represents the vector within the matrix
// --> j represents the char within the vector
// -> once we go through the entire row, appending all the chars of the vector, check if
// -> our new string = the word we want to find, if not move onto next row, if so, return found
void find_in_matrix(std::vector<std::vector<char>> matrix, std::string word) {
    std::string m_word = "";
    int word_length = word.size();
    //=- CHECKING FOR WORD IN ROWS / WITHIN VECTORS
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            int remaining_chars = matrix[i].size() - j;
            if ((remaining_chars < word_length) && !(word.find(matrix[i][j+1]))) { //
                break;
            } else {
              m_word.push_back(matrix[i][j]);   // push_back() used in favor of append() since append() adds all chars in one iteration + memory inefficient
            }
        }
        std::size_t found = m_word.find(word);
        if (found != std::string::npos) {
            std::cout << "The word: " << word << " was found horizontally in row: " << i << " starting at position " << found << std::endl;
        }
        m_word.clear();
    }

    //=- CHECKING FOR WORDS IN COLUMNS / ACROSS VECTORS
    // we have to go [0][0]->[0][1]->[0][2]->[1][0]->[1][1]
    for (int i = 0; i < matrix[0].size(); i++) {    // handles the horizontal size of the matrix == handles movement across columns
        for (int j = 0; j < matrix.size(); j++) {   // handles the vertical size of the matrix == handles movement across rows
            int remaining_chars = matrix.size() - j; // matrix.size() represents the num of rows, and j iterates over those rows; basically: total_num_rows - current_row_index
            if ((remaining_chars < word_length) && !(word.find(matrix[j][i]))) { // j+1 gives segmentation fault at the end by going out of bounds -> changed to just [j]
                break;
            } else {
                m_word.push_back(matrix[j][i]);
            }
        }

        std::size_t found = m_word.find(word);
        if (found != std::string::npos) {
            std::cout << "The word: " << word << " was found vertically in column: " << i << " starting at position " << found << std::endl;
        }

        m_word.clear();
    }
}




// - WORK OUT LOGIC OF FINDING A WORD MADE UP OF CHARS IN A COLUMN / MULTIPLE VECTORS


int main() {
    // CREATION OF A VECTOR OF VECTORS OF CHARS -- ESSENTIALLY A MATRIX
    std::vector<std::vector<char>> matrix;

    // ADDING VECTORS IN THE MATRIX
    matrix.push_back(std::vector<char>{'w', 'o', 'r', 'd'});
    matrix.push_back(std::vector<char>{'w', 'b', 'o', 'w'});
    matrix.push_back(std::vector<char>{'o', 'a', 'r', 'w'});
    matrix.push_back(std::vector<char>{'r', 'w', 'd', 'r'});
    matrix.push_back(std::vector<char>{'d', 'w', 'e', 'r'});

    std::string word = "word";
    find_in_matrix(matrix, word);

    return 0;
}
