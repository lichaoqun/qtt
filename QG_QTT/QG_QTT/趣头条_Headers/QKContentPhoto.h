//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface QKContentPhoto : LCBaseModel
{
    NSString *_img;
    NSString *_desc;
    double _read_time;
}

@property(nonatomic) double read_time; // @synthesize read_time=_read_time;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end

