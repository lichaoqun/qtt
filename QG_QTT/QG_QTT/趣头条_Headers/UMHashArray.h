//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface UMHashArray : NSObject <NSCoding>
{
    NSMutableArray *_arrayForObjects;
    NSMutableDictionary *_dictForKeyID;
    NSMutableDictionary *_dictForIdKey;
}

@property(retain, nonatomic) NSMutableDictionary *dictForIdKey; // @synthesize dictForIdKey=_dictForIdKey;
@property(retain, nonatomic) NSMutableDictionary *dictForKeyID; // @synthesize dictForKeyID=_dictForKeyID;
@property(retain, nonatomic) NSMutableArray *arrayForObjects; // @synthesize arrayForObjects=_arrayForObjects;
- (void).cxx_destruct;
- (void)updateObjectIndexAfterRemove:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

