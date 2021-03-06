//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell;

@protocol UICollectionViewDataSource <NSObject>
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (int)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(int)arg2;

@optional
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (int)numberOfSectionsInCollectionView:(UICollectionView *)arg1;
@end

