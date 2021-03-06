//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSNumber, NSThread, WAContactsStorage, XMPPConnection;

@protocol WAContactsStorageDelegate
- (void)contactsStorageDidFailToGenerateFavorites:(WAContactsStorage *)arg1;
- (void)contactsStorageDidGenerateFavorites:(NSNumber *)arg1;
- (void)contactsStorageDidUpdateFavorites:(WAContactsStorage *)arg1;
- (void)contactsStorageDidUpdateStatus:(WAContactsStorage *)arg1;
- (void)contactsStorageDidUpdateContacts:(WAContactsStorage *)arg1;
- (NSThread *)addressBookThread;
- (XMPPConnection *)connection;
- (BOOL)verificationInProgress;
@end

