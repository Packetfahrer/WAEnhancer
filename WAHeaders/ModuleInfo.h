//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ModuleInfo : NSObject
{
    NSString *_name;
    NSString *_path;
    NSString *_uuid;
    NSString *_arch;
    unsigned int _base;
}

+ (id)loadedModules;
@property(nonatomic) unsigned int base; // @synthesize base=_base;
@property(retain, nonatomic) NSString *arch; // @synthesize arch=_arch;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;


@end
