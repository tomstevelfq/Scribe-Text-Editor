#ifndef DOCUMENTMETRICS_H
#define DOCUMENTMETRICS_H

struct DocumentMetrics
{
    DocumentMetrics() : charCount(0), wordCount(0), currentColumn(1) {}
    int charCount;
    int wordCount;
    int currentColumn;
};

#endif // DOCUMENTMETRICS_H
