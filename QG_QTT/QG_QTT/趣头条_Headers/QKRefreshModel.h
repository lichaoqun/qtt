//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseContentModel.h"

#import "LCTableViewRowData-Protocol.h"

@class NSIndexPath, NSString;

@interface QKRefreshModel : QKBaseContentModel <LCTableViewRowData>
{
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (double)rowHeight;
- (id)cellKey;
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

