//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPStanza.h"

__attribute__((visibility("hidden")))
@interface XMPPAckStanza : XMPPStanza
{
}

+ (unsigned int)typeForString:(id)arg1;
+ (id)stringForType:(unsigned int)arg1;
+ (id)stringsForTypes;
- (id)log;
@property(readonly, nonatomic) int count;
@property(readonly, nonatomic) BOOL negative;
@property(nonatomic) unsigned int notificationType;
@property(nonatomic) unsigned int receiptType;
@property(nonatomic) unsigned int messageType;
@property(nonatomic) unsigned int ackClass;
- (id)initWithClass:(unsigned int)arg1;

@end
