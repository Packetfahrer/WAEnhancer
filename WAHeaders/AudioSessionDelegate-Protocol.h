//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class AudioSession;

@protocol AudioSessionDelegate <NSObject>

@optional
- (void)audioSessionVolumeChanged:(AudioSession *)arg1;
- (void)audioSessionStateChanged:(AudioSession *)arg1;
@end

