//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

#import "LCTableViewRowData-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, PromptTaskConfig;

@interface PromptTaskModel : LCBaseModel <LCTableViewRowData>
{
    int _curr_task;
    int _count_task;
    int _days;
    int _status;
    int _today_time;
    int _today_status;
    int _max_day;
    int _is_new_user;
    PromptTaskConfig *_task;
    NSDictionary *_button;
    long long _start_at;
    long long _currentTime;
    NSDictionary *_action;
}

@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) int is_new_user; // @synthesize is_new_user=_is_new_user;
@property(nonatomic) int max_day; // @synthesize max_day=_max_day;
@property(nonatomic) long long start_at; // @synthesize start_at=_start_at;
@property(retain, nonatomic) NSDictionary *button; // @synthesize button=_button;
@property(retain, nonatomic) PromptTaskConfig *task; // @synthesize task=_task;
@property(nonatomic) int today_status; // @synthesize today_status=_today_status;
@property(nonatomic) int today_time; // @synthesize today_time=_today_time;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int days; // @synthesize days=_days;
@property(nonatomic) int count_task; // @synthesize count_task=_count_task;
@property(nonatomic) int curr_task; // @synthesize curr_task=_curr_task;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)initWithAttribute:(id)arg1;
- (id)reusableIdentifier;
- (Class)cellClass;
- (double)cellRowHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) SEL rowAction;
@property(readonly) Class superclass;

@end

