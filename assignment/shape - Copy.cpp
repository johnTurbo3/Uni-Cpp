#include "window.h"

void draw(void)   
{
  	glColor3f(1,0,0);							// Set the Colour to red
		glBegin(GL_LINE_LOOP);						// Draw the 3 connected verticies of a triangle
		glVertex3f( 0.0f, 1.0f, 0.0f);					// Top
		glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
		glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
	glEnd();								// Finished Drawing The Triangle
	
	glTranslatef(-2.5f,0.0f,0.0f);						// Move Left 1.5 Units
	glColor3f(0,1,0);							// Set the Colour to green
	glBegin(GL_LINE_LOOP);							// Draw the triangle again
		glVertex3f( 0.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f,-1.0f, 0.0f);
		glVertex3f( 1.0f,-1.0f, 0.0f);
	glEnd();

	glTranslatef(5.0f,0.0f,0.0f);						// Move Right 5 Units
	glColor3f(0,0,1);							// Set the Colour to blue
	glBegin(GL_LINE_LOOP);							// Draw a square
		glVertex3f(-1.0f, 1.0f, 0.0f);					// Top Left
		glVertex3f( 1.0f, 1.0f, 0.0f);					// Top Right
		glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
		glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
	glEnd();
}

int main ( int argc, char** argv )   // Create Main Function For Bringing It All Together
{
	window w(argc,argv);  
	return 0;
}

