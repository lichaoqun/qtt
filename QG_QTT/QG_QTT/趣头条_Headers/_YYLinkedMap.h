//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _YYLinkedMapNode;

@interface _YYLinkedMap : NSObject
{
    struct __CFDictionary *_dic;
    unsigned long long _totalCost;
    unsigned long long _totalCount;
    _YYLinkedMapNode *_head;
    _YYLinkedMapNode *_tail;
    _Bool _releaseOnMainThread;
    _Bool _releaseAsynchronously;
}

- (void).cxx_destruct;
- (void)removeAll;
- (id)removeTailNode;
- (void)removeNode:(id)arg1;
- (void)bringNodeToHead:(id)arg1;
- (void)insertNodeAtHead:(id)arg1;
- (void)dealloc;
- (id)init;

@end

