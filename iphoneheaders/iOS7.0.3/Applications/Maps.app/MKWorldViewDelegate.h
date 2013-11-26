/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKWorldViewDelegate <NSObject>
@property (nonatomic,readonly) VKAttributedRouteMatch * currentRouteMatch; 
@optional
-(void)worldViewDidStartLoading:(id)arg1;
-(void)worldViewDidFinishLoading:(id)arg1;
-(void)worldViewDidFailLoading:(id)arg1 withError:(id)arg2;
-(void)worldViewDidBecomeFullyDrawn:(id)arg1;
-(void)worldView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)worldViewWillAnimateInAnnotationViews:(id)arg1;
-(void)worldViewDidAnimateInAnnotationViews:(id)arg1;
-(id)worldView:(id)arg1 painterForOverlay:(id)arg2;
-(void)worldView:(id)arg1 didChangeMapType:(unsigned)arg2;
-(void)worldView:(id)arg1 willChangeToMapDisplayStyle:(int)arg2;
-(void)worldView:(id)arg1 didChangeMapDisplayStyle:(int)arg2;
-(void)worldView:(id)arg1 didUpdateUserLocation:(id)arg2;
-(void)worldView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
-(void)worldView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)worldView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)worldViewDidChangeVisibleRegion:(id)arg1;
-(BOOL)worldView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
-(void)worldView:(id)arg1 willSelectLabelMarker:(id)arg2;
-(void)worldView:(id)arg1 didSelectLabelMarker:(id)arg2;
-(void)worldView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)worldView:(id)arg1 didDeselectLabelMarker:(id)arg2;
-(void)worldView:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)worldView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)worldView:(id)arg1 allowsRotationDidChange:(BOOL)arg2;
-(void)worldView:(id)arg1 allowsTiltDidChange:(BOOL)arg2;
-(void)worldView:(id)arg1 allowsMotionControlDidChange:(BOOL)arg2;
-(void)worldViewDidStartUserInteraction:(id)arg1;
-(void)worldViewDidStopUserInteraction:(id)arg1;
-(void)worldView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(BOOL)arg3;
-(void)worldView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(BOOL)arg4;
-(void)worldView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;
-(void)worldView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
-(double)worldView:(id)arg1 shouldDelayTapResponseOnAnnotationView:(id)arg2 withDistance:(float)arg3 forDuration:(double)arg4;
-(CGRect*)worldViewRectToAvoidForCallout:(id)arg1;
-(id)currentRouteMatch;
-(void)worldView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)worldView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)worldView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4;
-(id)worldView:(id)arg1 viewForAnnotation:(id)arg2;
-(void)worldView:(id)arg1 didAddAnnotationViews:(id)arg2;
-(void)worldView:(id)arg1 didSelectAnnotationView:(id)arg2;
-(void)worldView:(id)arg1 didDeselectAnnotationView:(id)arg2;
-(void)worldViewDidFinishMapsTransitionExpanding:(id)arg1;
@end
