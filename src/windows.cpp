#include "win.h"

void windows::WindowBase::updateWindowName () {
    if (this->windowHandle != NULL) {
        SetWindowText(this->windowHandle, this->windowName);
    }
}
void windows::WindowBase::updateWindowLocation () {
    if (this->windowHandle != NULL) {
        MoveWindow(this->windowHandle, this->x, this->y, this->width, this->height, TRUE);
    }
}
void windows::WindowBase::createWindow () {
    this->windowHandle = CreateWindowEx(this->extendedStyle, this->className, this->windowName, this->style, this->x, this->y, this->width, this->height, this->owner == nullptr ? NULL : this->owner->windowHandle, NULL, GetModuleHandle(NULL), this);
}
