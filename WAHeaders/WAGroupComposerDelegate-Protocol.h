//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSArray, NSString, UIImage, WAGroupComposer;

@protocol WAGroupComposerDelegate <NSObject>

@optional
- (void)groupComposerDidCancel:(WAGroupComposer *)arg1;
- (void)groupComposer:(WAGroupComposer *)arg1 didFinishWithContacts:(NSArray *)arg2 subject:(NSString *)arg3 picture:(UIImage *)arg4;
@end
