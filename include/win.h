#ifndef _WIN_H
#define _WIN_H

#ifndef UNICODE
#define UNICODE
#endif
#ifndef _UNICODE
#define _UNICODE
#endif

#include <windows.h>

namespace windows {
    class WindowBase {
        private:
        int x, y, width, height;
        DWORD style, extendedStyle;
        LPCTSTR className, windowName;
        WindowBase* owner;

        HWND windowHandle = NULL;
        void updateWindowName ();
        void updateWindowLocation();
        protected:
        WindowBase(LPCTSTR windowName = L"", LPCTSTR className = L"", DWORD style = 0, DWORD extendedStyle = 0, int x = CW_USEDEFAULT, int y = CW_USEDEFAULT, int width = CW_USEDEFAULT, int height = CW_USEDEFAULT) {
            this->windowName = windowName;
            this->className = className;
            this->style = style;
            this->extendedStyle = extendedStyle;
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }
        void setClassName (LPCTSTR name) {
            this->className = className;
        }
        void createWindow ();
        public:
        void setWindowName (LPCTSTR name) {
            this->windowName = name;
            updateWindowName();
        }
        void setX (int x) {
            this->x = x;
            updateWindowLocation();
        }
        void setY (int y) {
            this->y = y;
            updateWindowLocation();
        }
        void setWidth (int width) {
            this->width = width;
            updateWindowLocation ();
        }
        void setHeight (int height) {
            this->height = height;
            updateWindowLocation();
        }
    };
}

#endif