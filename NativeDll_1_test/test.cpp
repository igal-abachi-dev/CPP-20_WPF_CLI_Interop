#include "pch.h"
#include "MainWindowLogic.h"

TEST(MainWindow, CallCtor) {
  EXPECT_NE( new Core::MainWindowLogic(), nullptr);
}


TEST(MainWindow, ClickTest) {
	const auto logic = new Core::MainWindowLogic();
	EXPECT_EQ(logic->AddClicks(), 1);
	EXPECT_EQ(logic->AddClicks(), 2);
}