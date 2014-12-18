//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSArray, NSDate, NSNumber, NSSet, NSString, WAContactSection;

__attribute__((visibility("hidden")))
@interface WAContact : NSManagedObject
{
}

+ (id)mergedContactWithParent:(id)arg1 includeChildren:(BOOL)arg2;
+ (id)allLinkedNonWhatsAppPhonesWithParent:(id)arg1 includeChildren:(BOOL)arg2;
+ (id)allLinkedWhatsAppPhonesWithParent:(id)arg1 includeChildren:(BOOL)arg2;
- (id)individualContactAsMergedContact;
- (id)mergedContact;
- (id)allLinkedAddressBookIDs;
- (id)allLinkedNonWhatsAppPhones;
- (id)allLinkedWhatsAppPhones;
@property(retain, nonatomic) NSString *fullName; // @dynamic fullName;
- (id)copyContactInfo;

// Remaining properties
@property(retain, nonatomic) NSNumber *abUserID; // @dynamic abUserID;
@property(retain, nonatomic) NSSet *children; // @dynamic children;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSString *indexName; // @dynamic indexName;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(retain, nonatomic) WAContact *parent; // @dynamic parent;
@property(retain, nonatomic) NSSet *phones; // @dynamic phones;
@property(retain, nonatomic) WAContactSection *section; // @dynamic section;
@property(retain, nonatomic) NSNumber *sort; // @dynamic sort;
@property(retain, nonatomic) NSArray *tokens; // @dynamic tokens;

@end
