//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSThread;

@interface HtmlTemplateManager : NSObject
{
    NSString *_templateHtml;
    NSThread *_thread;
    NSMutableDictionary *_localContents;
}

+ (id)manger;
@property(retain, nonatomic) NSMutableDictionary *localContents; // @synthesize localContents=_localContents;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(copy, nonatomic) NSString *templateHtml; // @synthesize templateHtml=_templateHtml;
- (void).cxx_destruct;
- (void)preDownloadHtml:(id)arg1;
- (void)holdOnThread;
- (void)worker:(id)arg1;
- (id)validHtml;
- (id)validUrl;
- (id)templatekey;
- (id)parsingHtml:(id)arg1;
- (id)generateHtml:(id)arg1;
- (id)fetchDiskTemplate:(id)arg1;
- (void)saveTemplate:(id)arg1 path:(id)arg2;
- (void)checkTemplate:(id)arg1 template:(id)arg2;
- (void)downloadTemplate:(id)arg1;
- (void)patchTemplate:(id)arg1;
- (void)downloadHtml:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

