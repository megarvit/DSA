//NAME: Garvit Jain
//REG. NO: 21BCE10922

#include <iostream>
#include <vector>
#include <bitset>

// Constants
const int FRAME_SIZE = 8;  // Size of each frame in bits

// Function to send a frame over the data link layer
void sendDataLinkLayer(const std::vector<bool>& frame) {
    // Simulate the transmission of the frame
    std::cout << "Sending frame: ";
    for (bool bit : frame) {
        std::cout << bit;
    }
    std::cout << std::endl;
    
    // Simulate the reception of the frame at the other end
    std::cout << "Receiving frame: ";
    for (bool bit : frame) {
        std::cout << bit;
    }
    std::cout << std::endl;
}

int main() {
    // Generate some example data frames
    std::vector<std::bitset<FRAME_SIZE>> dataFrames = {
        std::bitset<FRAME_SIZE>("01010101"),
        std::bitset<FRAME_SIZE>("11110000"),
        std::bitset<FRAME_SIZE>("00110011")
    };

    // Send each data frame over the data link layer
    for (const std::bitset<FRAME_SIZE>& frame : dataFrames) {
        // Convert the frame to a vector of bool
        std::vector<bool> frameData;
        for (size_t i = 0; i < FRAME_SIZE; i++) {
            frameData.push_back(frame[i]);
        }
        
        // Send the frame over the data link layer
        sendDataLinkLayer(frameData);
    }
    
    return 0;
}
