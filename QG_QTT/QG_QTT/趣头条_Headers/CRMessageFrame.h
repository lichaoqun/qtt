//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UITableView, V5Message;

@interface CRMessageFrame : NSObject
{
    _Bool _showTime;
    _Bool _showAvatar;
    _Bool _cellOnRight;
    _Bool _cellOfClient;
    _Bool _isDownloadingMessage;
    _Bool _stopDownloading;
    double _cellHeight;
    V5Message *_message;
    NSString *_strTime;
    double _avatarRadius;
    unsigned long long _imageRetryCounter;
    UITableView *_tableView;
    struct CGRect _timeF;
    struct CGRect _contentF;
    struct CGRect _avatarF;
    struct CGRect _statusF;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool stopDownloading; // @synthesize stopDownloading=_stopDownloading;
@property(nonatomic) _Bool isDownloadingMessage; // @synthesize isDownloadingMessage=_isDownloadingMessage;
@property(nonatomic) unsigned long long imageRetryCounter; // @synthesize imageRetryCounter=_imageRetryCounter;
@property(nonatomic) _Bool cellOfClient; // @synthesize cellOfClient=_cellOfClient;
@property(nonatomic) _Bool cellOnRight; // @synthesize cellOnRight=_cellOnRight;
@property(nonatomic) double avatarRadius; // @synthesize avatarRadius=_avatarRadius;
@property(nonatomic) _Bool showAvatar; // @synthesize showAvatar=_showAvatar;
@property(nonatomic) _Bool showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSString *strTime; // @synthesize strTime=_strTime;
@property(retain, nonatomic) V5Message *message; // @synthesize message=_message;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) struct CGRect statusF; // @synthesize statusF=_statusF;
@property(nonatomic) struct CGRect avatarF; // @synthesize avatarF=_avatarF;
@property(nonatomic) struct CGRect contentF; // @synthesize contentF=_contentF;
@property(nonatomic) struct CGRect timeF; // @synthesize timeF=_timeF;
- (void).cxx_destruct;
- (void)updateFrame;
- (id)initWithTable:(id)arg1;

@end

