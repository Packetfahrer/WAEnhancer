//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DecFile.h"

#import "XMPPSocketDelegate-Protocol.h"

@class ExecutionTimeProfiler, NSData, NSDate, NSMutableArray, NSMutableData, NSString, XMPPBinaryCoder, XMPPSocket;

__attribute__((visibility("hidden")))
@interface XMPPStream : NSObject <XMPPSocketDelegate>
{
    XMPPBinaryCoder *_binaryCoder;
    NSMutableData *_incomingBuffer;
    XMPPSocket *_socket;
    ExecutionTimeProfiler *_profiler;
    NSMutableData *_nextToken;
    NSMutableArray *_messages;
    BOOL _streamOpened;
    BOOL _firstPresenceReceived;
    struct dispatch_queue_s *_queue;
    BOOL _contactsAccessAllowed;
    BOOL _xmppPassiveMode;
    id <XMPPStreamDelegate> _delegate;
    NSDate *_lastNetworkActivity;
    NSString *_xmppUser;
    NSData *_xmppPassword;
    NSString *_xmppHost;
}

@property(nonatomic) BOOL xmppPassiveMode; // @synthesize xmppPassiveMode=_xmppPassiveMode;
@property(retain, nonatomic) NSString *xmppHost; // @synthesize xmppHost=_xmppHost;
@property(retain, nonatomic) NSData *xmppPassword; // @synthesize xmppPassword=_xmppPassword;
@property(retain, nonatomic) NSString *xmppUser; // @synthesize xmppUser=_xmppUser;
@property(nonatomic) BOOL contactsAccessAllowed; // @synthesize contactsAccessAllowed=_contactsAccessAllowed;
@property(retain, nonatomic) NSDate *lastNetworkActivity; // @synthesize lastNetworkActivity=_lastNetworkActivity;
@property(nonatomic) id <XMPPStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onSocket:(id)arg1 willConnectToHost:(id)arg2;
- (void)processElements:(id)arg1;
- (void)processStanza:(id)arg1;
- (void)processMessages;
- (void)outputProfilingResults;
- (unsigned int)sendArray:(id)arg1;
- (unsigned int)sendArray:(id)arg1 timeout:(double)arg2;
- (unsigned int)send:(id)arg1;
- (unsigned int)send:(id)arg1 timeout:(double)arg2;
- (unsigned int)internalSend:(id)arg1 timeout:(double)arg2 encrypted:(BOOL)arg3;
- (void)sendAndCloseStream:(id)arg1;
- (void)closeStream;
- (void)dropStream;
- (void)open;
@property(readonly) NSString *jid;
@property(readonly) BOOL opened;
@property(readonly) struct dispatch_queue_s *queue;
@property(readonly) XMPPSocket *socket;
- (void)dealloc;
- (id)init;

@end

