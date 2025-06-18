#include <iostream>

#ifndef SURFBOARD_H
#define SURFBOARD_H

using namespace std;

class Surfboard
{
private:
	int mId;
	string mBrand;
	string mModel;
	double mLength;
	double mWidth;
	double mThickness;
	int mQuantity; 
	double mPrice;

public:

	Surfboard(string brand, string model, double length=0.0, double width=0.0, double thickness=0.0, int quantity=0, double price=0.0);

	int getId() const { return mId; }
	string getBrand() const { return mBrand; }
	string getModel() const { return mModel; }
	double getLength() const { return mLength; }
	double getWidth() const { return mWidth; }
	double getThickness() const { return mThickness; }
	double getPrice() const { return mPrice; }
	int getQuantity() const { return mQuantity; }

	void setBrand(int brand) { mBrand = brand; }
	void setModel(string model) { mModel = model; }
	void setLength(double length) { mLength = length; }
	void setWidth(double width) { mWidth = width; }
	void setThickness(double thickness) { mThickness = thickness; }
	void setPrice(double price) { mPrice = price; }
	void setQuantity(int quantity) { mQuantity = quantity; }

	bool operator==(const Surfboard& other);

	friend ostream& operator<<(ostream& os, const Surfboard& s);
};

#endif