#include <gtest/gtest.h>

#include "Point.hpp"
#include "LineSegment.hpp"
#include "Triangle.hpp"

TEST(PointTest, getters)
{
    Point testPoint(0.0,2.0);
    Point testPoint2(0.0,3.0);
    GTEST_ASSERT_EQ(testPoint.getXCoord(), testPoint2.getXCoord());
}

TEST(PointTest2, moveByVector)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,3.0);
    testPoint.moveByVector(-1.0,-1.0);
    GTEST_ASSERT_EQ(testPoint.getXCoord(), -1.0);
    GTEST_ASSERT_EQ(testPoint.getYCoord(), -1.0);
}

TEST(PointTest2, distance)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,3.0);
    GTEST_ASSERT_EQ(testPoint.distanceTo(testPoint2), 3.0);
}
TEST(PointTest2, rotate)
{
    Point testPoint(1.0,0.0);
    testPoint.rotate(180.0* M_PI / 180.0, 0.0, 0.0);
    GTEST_ASSERT_EQ(testPoint.getXCoord(), -1.0);
    GTEST_ASSERT_EQ(testPoint.getYCoord(), 0);
}

TEST(LineSegnentTest, length)
{
    Point testPoint(0.0,2.0);
    Point testPoint2(0.0,3.0);
    LineSegment LineSegment_1(testPoint, testPoint2);
    GTEST_ASSERT_EQ(LineSegment_1.length(), 1.0);
}

TEST(LineSegmentTest, IsPointOnLine)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,-10.0);
    Point testPoint3(0.0,3.0);
    LineSegment LineSegment_1(testPoint, testPoint3);
    GTEST_ASSERT_EQ(LineSegment_1.isPointOnLine(testPoint), 1);
    GTEST_ASSERT_EQ(LineSegment_1.isPointOnLine(testPoint2), 0);
    GTEST_ASSERT_EQ(LineSegment_1.isPointOnLine(testPoint3), 1);
}

TEST(LineSegment, MoveByVectors)
{
    Point testPoint(0.0,2.0);
    Point testPoint2(0.0,3.0);
    LineSegment LineSegment_1(testPoint, testPoint2);
    LineSegment_1.moveByVector(-1.0,1.0);
    GTEST_ASSERT_EQ(LineSegment_1.length(), 1.0);
}

TEST(LineSegmentTest, AreLinesParallel)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,3.0);
    Point testPoint3(1.0,0.0);
    Point testPoint4(1.0,5.0);
    LineSegment LineSegment_1(testPoint, testPoint2);
    LineSegment LineSegment_2(testPoint3, testPoint4);
    GTEST_ASSERT_EQ(LineSegment_1.isLineSegmentPararell(LineSegment_2), true);
}

TEST(LineSegmentTest, AreLinesPerpendicular)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(-1.0,0.0);
    Point testPoint3(0.0,0.0);
    Point testPoint4(0.0,1.0);
    LineSegment LineSegment_1(testPoint, testPoint2);
    LineSegment LineSegment_2(testPoint3, testPoint4);
    GTEST_ASSERT_EQ(LineSegment_1.isLineSegmentPerpendicular(LineSegment_2), true);
}

TEST(TriangleTest, Circuit)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,3.0);
    Point testPoint3(4.0,0.0);
    Triangle Triangle1(testPoint, testPoint2, testPoint3);
    GTEST_ASSERT_EQ(Triangle1.getCircuit(), 12);
}

TEST(TriangleTest, Area)
{
    Point testPoint(0.0,0.0);
    Point testPoint2(0.0,3.0);
    Point testPoint3(4.0,0.0);
    Triangle Triangle1(testPoint, testPoint2, testPoint3);
    GTEST_ASSERT_EQ(Triangle1.getArea(), 6);
}


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}