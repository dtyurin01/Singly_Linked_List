//
// Created by dtyur on 18.01.2024.
//

#ifndef VORBEREITUNGKLAUSUR_TLISTENKNOTEN_H
#define VORBEREITUNGKLAUSUR_TLISTENKNOTEN_H
#pragma once

class TListenKnoten{
private:
    char data;
    TListenKnoten*next;
public:
    char getData() const;
    void setData(char data);
    void setNext(TListenKnoten *next);
    TListenKnoten *getNext() const;

    TListenKnoten(char data, TListenKnoten *next);
    TListenKnoten();
    static void vorne_anfuegen(TListenKnoten *& anker , char wert);
    static void print_list(TListenKnoten* anker);


    virtual ~TListenKnoten();
};

#endif //VORBEREITUNGKLAUSUR_TLISTENKNOTEN_H
