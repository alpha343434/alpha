#include "helpers.h"
#include <math.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int row=0; row<height; row++){
        for(int column=0; column<width; column++){
                float ort=(float)(image[row][column].rgbtBlue+image[row][column].rgbtRed+image[row][column].rgbtGreen)/3;

                image[row][column].rgbtBlue= round(ort);
                image[row][column].rgbtRed= round(ort);
                image[row][column].rgbtGreen= round(ort);
            }
        }
        return;
    }

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    int sepiaRed,sepiaGreen,sepiaBlue;
    for(int row=0; row<height; row++){
        for(int column=0; column<width; column++){
                sepiaRed= round (0.393*image[row][column].rgbtRed +0.769*image[row][column].rgbtGreen+ 0.189*image[row][column].rgbtBlue);
                sepiaGreen= round (0.349*image[row][column].rgbtRed + 0.686*image[row][column].rgbtGreen+0.168*image[row][column].rgbtBlue);
                sepiaBlue= round (0.272*image[row][column].rgbtRed +0.534*image[row][column].rgbtGreen+0.131* image[row][column].rgbtBlue);

                image[row][column].rgbtBlue= sepiaBlue>255 ? 255: sepiaBlue;
                image[row][column].rgbtRed= sepiaRed>255 ? 255: sepiaRed;
                image[row][column].rgbtGreen= sepiaGreen>255 ? 255: sepiaGreen;
            }
        }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i<height; i++){
        for(int j=0 ;j<width/2; j++){
            RGBTRIPLE temp= image[i][j];
            image[i][j]= image[i][width-1- j];
            image[i][width -j -1]=temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    RGBTRIPLE temp[height][width];
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            temp[i][j]=image[i][j];
        }
    }


    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            int totalred=0,totalblue=0,totalgreen=0;
            float counter=0.0;
            for(int x=-1; x<2; x++){
                for(int y=-1; y<2; y++){
                    int currentx= i+x;
                    int currenty= j+y;

                    if(currentx<0 || currentx> (height-1)||currenty<0 || currenty> (width-1)){
                        continue;
                    }
                    totalred+= image[currentx][currenty].rgbtRed;
                    totalblue+= image[currentx][currenty].rgbtBlue;
                    totalgreen+= image[currentx][currenty].rgbtGreen;

                    counter++;
                }
            }

            temp[i][j].rgbtRed= round((float)totalred/counter);
            temp[i][j].rgbtBlue= round((float)totalblue/counter);
            temp[i][j].rgbtGreen= round((float)totalgreen/counter);
        }
    }
    for(int i=0; i<height;i++){
        for(int j=0;j<width; j++){


            image[i][j].rgbtRed= temp[i][j].rgbtRed;
            image[i][j].rgbtGreen= temp[i][j].rgbtGreen;
            image[i][j].rgbtBlue= temp[i][j].rgbtBlue;
        }
    }
    return;
}
