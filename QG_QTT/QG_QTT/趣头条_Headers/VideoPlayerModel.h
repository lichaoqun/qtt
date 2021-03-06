//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSDictionary, NSString, VideoRegular;

@interface VideoPlayerModel : LCBaseModel
{
    _Bool _isReported;
    NSString *_host_id;
    NSString *_ID;
    NSString *_media_url;
    NSString *_cover;
    NSString *_member_id;
    NSString *_video_id;
    NSString *_client_ip;
    NSString *_title;
    NSString *_size;
    NSString *_duration;
    NSString *_fps;
    NSString *_bitrate;
    NSString *_resolution;
    NSString *_source;
    long long _width;
    long long _height;
    NSString *_cid;
    long long _real_video_duration;
    VideoRegular *_regular;
    NSDictionary *_appAwakeInfoForReadTime;
}

@property(copy, nonatomic) NSDictionary *appAwakeInfoForReadTime; // @synthesize appAwakeInfoForReadTime=_appAwakeInfoForReadTime;
@property(retain, nonatomic) VideoRegular *regular; // @synthesize regular=_regular;
@property(nonatomic) _Bool isReported; // @synthesize isReported=_isReported;
@property(nonatomic) long long real_video_duration; // @synthesize real_video_duration=_real_video_duration;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *bitrate; // @synthesize bitrate=_bitrate;
@property(copy, nonatomic) NSString *fps; // @synthesize fps=_fps;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
@property(copy, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(copy, nonatomic) NSString *member_id; // @synthesize member_id=_member_id;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *media_url; // @synthesize media_url=_media_url;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *host_id; // @synthesize host_id=_host_id;
- (void).cxx_destruct;
- (id)initWithMp4:(id)arg1;
- (id)initWithQTG:(id)arg1;
- (id)initWithQDP:(id)arg1;
- (id)initWithAttribute:(id)arg1 info:(id)arg2;

@end

