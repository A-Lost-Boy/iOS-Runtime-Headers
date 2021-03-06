/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOPreference : NSObject {
    NSString * _notificationName;
    NSString * _preferenceKey;
}

@property (nonatomic, retain) NSString *notificationName;
@property (nonatomic, retain) NSString *preferenceKey;

+ (id)diskPressureMissingPhotoCountPreference;
+ (id)syncedAlbumIdentifierPreference;
+ (id)syncedPhotosLimitPreference;

- (void).cxx_destruct;
- (void)_synchronizeAndNotifyObservers;
- (id)changeObserverInQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithPreferenceKey:(id)arg1 notificationName:(id)arg2;
- (id)notificationName;
- (id)preferenceKey;
- (void)removeValue;
- (void)setNotificationName:(id)arg1;
- (void)setPreferenceKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
