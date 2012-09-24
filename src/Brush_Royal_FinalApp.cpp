/** 
* @RoyalSocietyApp.cpp
* A simple app to display a cat picture using cinder
* 
* @author Adam Brush
* @date 2012-09-09
* 
* @note This file is (c) 2012. It is licensed under the
* CC BY 3.0 licenses (http://creativecommons.org/licenses/by/3.0/),
* which means you are free to use, share, and remix it as long as you
* give attribution. Commercial uses are allowed.
*/

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "Resources.h"
#include "boost/date_time/posix_time/posix_time.hpp"
#include "LinkedList.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Brush_Royal_Final : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);
private:
	static const int kWinWidth = 800;
	static const int kWinHeight = 600;
	static const int kSurfaceSize=1024;
	Surface* mySurface_;
	LinkedList* list;
};

void Brush_Royal_Final::setup()
{

}

void Brush_Royal_Final::prepareSettings(Settings *settings){
	(*settings).setWindowSize(kWinHeight, kWinWidth);
	(*settings).setResizable(false);
	(*settings).setFullScreen(false);
}

void Brush_Royal_Final::mouseDown( MouseEvent event )
{

}

void Brush_Royal_Final::update()
{

}

void Brush_Royal_Final::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );
	gl::draw(*mySurface_);
}

CINDER_APP_BASIC( Brush_Royal_Final, RendererGl )
