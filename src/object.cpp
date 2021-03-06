#include <iostream>
#include <locale>

class Object{
	private:
		wchar_t tagName;
		double probability;
		int feature;
		int distance;
		int posX;
		int posY;
	public:
		Object(){}

		Object(wchar_t tagName_, double prob, int fea){
			tagName = tagName_;
			probability = prob;
			feature = fea;
		}

		Object(wchar_t tagName_, int posX_, int posY_, double prob, int fea){
			tagName = tagName_;
			posX = posX_;
			posY = posY_;
			probability = prob;
			feature = fea;
		}

		wchar_t getTagName(){
			return tagName;
		}
		
		wchar_t setTagName(wchar_t tN){
			return tagName = tN;
		}
		
		void setDistance(int d){
			distance = d;
		}
		
		int getDistance(){
			return distance;
		}

		int getX(){
			return posX;
		}

		int getY(){
			return posY;
		}

		void setProbability(double prob){
			probability = prob;
		}

		double getProbability(){
			return probability;
		}
		
		void setFeature(int fea){
			feature = fea;
		}
		
		int getFeature(){
			return feature;
		}

		void moveLeft(){
			posY -= 1;
		}

		void moveRight(){
			posY += 1;
		}

		void moveUp(){
			posX -= 1;
		}

		void moveDown(){
			posX += 1;
		}
};
