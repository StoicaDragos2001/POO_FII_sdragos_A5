#include "Canvas.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

Canvas::Canvas(int width, int height) {
	this->width = width;
	this->height = height;
	this->matrix = (char**)malloc(this->height * sizeof(char));

	for (int i = 0; i < this->height; i++)
		    this->matrix[i] = (char*)malloc(this->width * sizeof(char));

	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			this->matrix[i][j] = ' ';
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;

    if (abs(dx) > abs(dy))
    {
        this->matrix[x][y] = ch;
        int pk = (2 * abs(dy)) - abs(dx);

        for (int i = 0; i < abs(dx); i++)
        {
            x = x + 1;
            if (pk < 0)
                pk = pk + (2 * abs(dy));
            else
            {
                y = y + 1;
                pk = pk + (2 * abs(dy)) - (2 * abs(dx));
            }
            this->matrix[x][y] = ch;
        }
    }
    else
    {
        this->matrix[x][y] = ch;
        int pk = (2 * abs(dx)) - abs(dy);

        for (int i = 0; i < abs(dy); i++)
        {
            y = y + 1;
            if (pk < 0)
                pk = pk + (2 * abs(dx));
            else
            {
                x = x + 1;
                pk = pk + (2 * abs(dx)) - (2 * abs(dy));
            }
            this->matrix[x][y] = ch;
        }
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    int i, j;
    for(i=0;i< this->height;i++)
        for (j = 0; j < this->width; j++)
        {
            if ((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1))
                this->matrix[i][j] = ch;
            else
                this->matrix[i][j] = ' ';
        }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    int i, j;
    for (i = 0; i < this->height; i++)
        for (j = 0; j < this->width; j++)
        {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
                this->matrix[i][j] = ch;
            else
                this->matrix[i][j] = ' ';
        }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    int i, j;
    for (i = top; i <= bottom; i++)
        for (j = left; j <= right; j++)
            if (i == top || j == left || i == bottom || j == right)
                this->matrix[i][j] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    int i, j;
    for (i = top; i <= bottom; i++)
        for (j = left; j <= right; j++)
            this->matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch) {
    this->matrix[x][y] = ch;
}

void Canvas::Print() {
    int i, j, aux;
    for (i = 0; i < this->height; i++)
    {
        for (j = 0; j < this->height; j++)
        {
            aux = this->matrix[i][j];
            printf("%c", aux);
        }
        printf("\n");
    }
}

void Canvas::Clear() {
    int i, j;
    for (i = 0; i < this->height; i++)
        for (j = 0; j < this->width; j++)
            this->matrix[i][j] = ' ';
}