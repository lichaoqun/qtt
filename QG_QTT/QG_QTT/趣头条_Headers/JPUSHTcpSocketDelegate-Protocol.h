//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JPUSHReceivedPacketController, JPUSHTcpSocket, NSData;

@protocol JPUSHTcpSocketDelegate <NSObject>
- (void)connectionSendQueueEmpty:(JPUSHTcpSocket *)arg1;
- (void)connection:(JPUSHTcpSocket *)arg1 didSendData:(NSData *)arg2;
- (void)connection:(JPUSHTcpSocket *)arg1 didReceiveElement:(JPUSHReceivedPacketController *)arg2;
- (void)connectionDidFailed;
- (void)connectionDidClose:(JPUSHTcpSocket *)arg1;
- (void)connectionDidSetup:(JPUSHTcpSocket *)arg1;
@end

