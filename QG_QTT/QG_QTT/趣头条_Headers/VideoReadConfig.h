//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSMutableArray;

@interface VideoReadConfig : LCBaseModel
{
    NSMutableArray *_qdp;
    NSMutableArray *_qtg;
    NSMutableArray *_mp4;
}

@property(retain, nonatomic) NSMutableArray *mp4; // @synthesize mp4=_mp4;
@property(retain, nonatomic) NSMutableArray *qtg; // @synthesize qtg=_qtg;
@property(retain, nonatomic) NSMutableArray *qdp; // @synthesize qdp=_qdp;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end

