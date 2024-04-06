#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Source.h"
//#include "C:\Users\lavre\algds2024\lab1\LabDataProject1\Source.cpp"

TEST(MinFunction_Test, ThreeIntegers_MinimumReturned) {
    // Arrange
    int a = 5, b = 10, c = 3;

    // Act
    int result = Min(a, b, c);

    // Assert
    EXPECT_EQ(result, 3);
}

TEST(MinFunction_Test, ThreeIntegers_EqualMinimumReturned) {
    // Arrange
    int a = 5, b = 3, c = 5;

    // Act
    int result = Min(a, b, c);

    // Assert
    EXPECT_EQ(result, 3);
}

TEST(MinFunction_Test, ThreeIntegers_MaximumReturned) {
    // Arrange
    int a = 10, b = 20, c = 30;

    // Act
    int result = Min(a, b, c);

    // Assert
    EXPECT_EQ(result, 10);
}
TEST(MinimumPenalty_Test, SampleMatrix_MinimumPenaltyCalculated) {
    // Arrange
    int n = 3, m = 3;
    int** A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(m * sizeof(int));
    }
    A[0][0] = 1; A[0][1] = 2; A[0][2] = 3;
    A[1][0] = 4; A[1][1] = 5; A[1][2] = 6;
    A[2][0] = 7; A[2][1] = 8; A[2][2] = 9;

    // Act
    int result = calculateMinimumPenalty(A, n, m);

    // Assert
    EXPECT_EQ(result, 14);

    // Clean up
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    free(A);
}
int Car(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
