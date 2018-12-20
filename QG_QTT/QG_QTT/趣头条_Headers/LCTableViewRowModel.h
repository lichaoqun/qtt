//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LCTableViewRowData-Protocol.h"

@class NSIndexPath, NSString;

@interface LCTableViewRowModel : NSObject <LCTableViewRowData>
{
    NSIndexPath *_indexPath;
    SEL _rowAction;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) SEL rowAction; // @synthesize rowAction=_rowAction;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (double)cellRowHeight;
- (id)reusableIdentifier;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

