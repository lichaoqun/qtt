//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@interface VideoRegular : LCBaseModel
{
    float _play_time;
    long long _video_length_min;
    long long _video_length_max;
}

@property(nonatomic) float play_time; // @synthesize play_time=_play_time;
@property(nonatomic) long long video_length_max; // @synthesize video_length_max=_video_length_max;
@property(nonatomic) long long video_length_min; // @synthesize video_length_min=_video_length_min;
- (id)initWithAttribute:(id)arg1;

@end

