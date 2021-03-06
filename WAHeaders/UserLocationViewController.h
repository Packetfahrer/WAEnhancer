//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "ABPersonViewControllerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"
#import "MKReverseGeocoderDelegate.h"

@class CLLocation, CLLocationManager, MKMapView, MKReverseGeocoder, MultilineHeaderView, NSMutableArray, UIBarButtonItem, UIImageView, UILabel, UISegmentedControl, UIToolbar;

__attribute__((visibility("hidden")))
@interface UserLocationViewController : WAViewController <MKMapViewDelegate, MKReverseGeocoderDelegate, CLLocationManagerDelegate, ABPersonViewControllerDelegate>
{
    UISegmentedControl *_segmentedControl;
    UIBarButtonItem *_barButtonSearch;
    UIBarButtonItem *_barButtonAction;
    UIBarButtonItem *_segmentedControlBarItem;
    UIImageView *_noMediaImage;
    UILabel *_noMediaLabelTitle;
    UILabel *_noMediaLabelText;
    MultilineHeaderView *_headerView;
    MKReverseGeocoder *_reverseGeocoder;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSMutableArray *_annotations;
    unsigned int _regionType;
    int _locationIndex;
    double _zoomLevel;
    BOOL _showMyLocation;
    BOOL _singleLocation;
    MKMapView *_mapViewMain;
    UIToolbar *_toolbar;
    id <WALocationDataSource> _dataSource;
}

@property(nonatomic) id <WALocationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) MKMapView *mapViewMain; // @synthesize mapViewMain=_mapViewMain;
@property(nonatomic) BOOL singleLocation; // @synthesize singleLocation=_singleLocation;
@property(nonatomic) BOOL showMyLocation; // @synthesize showMyLocation=_showMyLocation;

- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)directionsToHere;
- (void)addToContacts;
- (void)searchAction:(id)arg1;
- (void)mapAction:(id)arg1;
- (void)mapTypeChanged:(id)arg1;
- (void)viewDidUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateAnnotationsWithCurrentLocation;
- (void)reloadAnnotations;
- (id)findFirstGroupingWithAnnotations:(id)arg1;
- (void)updateLayoutToOrientation:(int)arg1;
- (void)updateToolbar;
- (void)updateMapRegion;
- (void)updateNavBar;
- (id)initWithLocationDataSource:(id)arg1;

@end

