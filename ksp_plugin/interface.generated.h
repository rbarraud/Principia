// Warning!  This file was generated by running a program (see project |tools|).
// If you change it, the changes will be lost the next time the generator is
// run.  You should change the generator instead.

extern "C"
struct NavigationFrameParameters {
  int extension;
  int centre_index;
  int primary_index;
  int secondary_index;
};

static_assert(std::is_pod<NavigationFrameParameters>::value,
              "NavigationFrameParameters is used for interfacing");

extern "C"
struct XYZ {
  double x;
  double y;
  double z;
};

static_assert(std::is_pod<XYZ>::value,
              "XYZ is used for interfacing");

extern "C"
struct AdaptiveStepParameters {
  std::int64_t integrator_kind;
  std::int64_t max_steps;
  double length_integration_tolerance;
  double speed_integration_tolerance;
};

static_assert(std::is_pod<AdaptiveStepParameters>::value,
              "AdaptiveStepParameters is used for interfacing");

extern "C"
struct BodyParameters {
  char const* name;
  char const* gravitational_parameter;
  char const* reference_instant;
  char const* mean_radius;
  char const* axis_right_ascension;
  char const* axis_declination;
  char const* reference_angle;
  char const* angular_frequency;
  char const* j2;
  char const* reference_radius;
};

static_assert(std::is_pod<BodyParameters>::value,
              "BodyParameters is used for interfacing");

extern "C"
struct Burn {
  double thrust_in_kilonewtons;
  double specific_impulse_in_seconds_g0;
  NavigationFrameParameters frame;
  double initial_time;
  XYZ delta_v;
  bool is_inertially_fixed;
};

static_assert(std::is_pod<Burn>::value,
              "Burn is used for interfacing");

extern "C"
struct ConfigurationAccuracyParameters {
  char const* fitting_tolerance;
  char const* geopotential_tolerance;
};

static_assert(std::is_pod<ConfigurationAccuracyParameters>::value,
              "ConfigurationAccuracyParameters is used for interfacing");

extern "C"
struct ConfigurationFixedStepParameters {
  char const* fixed_step_size_integrator;
  char const* integration_step_size;
};

static_assert(std::is_pod<ConfigurationFixedStepParameters>::value,
              "ConfigurationFixedStepParameters is used for interfacing");

extern "C"
struct ConfigurationAdaptiveStepParameters {
  char const* adaptive_step_size_integrator;
  char const* length_integration_tolerance;
  char const* speed_integration_tolerance;
};

static_assert(std::is_pod<ConfigurationAdaptiveStepParameters>::value,
              "ConfigurationAdaptiveStepParameters is used for interfacing");

extern "C"
struct KeplerianElements {
  double eccentricity;
  double semimajor_axis;
  double mean_motion;
  double inclination_in_degrees;
  double longitude_of_ascending_node_in_degrees;
  double argument_of_periapsis_in_degrees;
  double mean_anomaly;
};

static_assert(std::is_pod<KeplerianElements>::value,
              "KeplerianElements is used for interfacing");

extern "C"
struct NavigationManoeuvre {
  Burn burn;
  double initial_mass_in_tonnes;
  double final_mass_in_tonnes;
  double mass_flow;
  double duration;
  double final_time;
  double time_of_half_delta_v;
  double time_to_half_delta_v;
  XYZ inertial_direction;
};

static_assert(std::is_pod<NavigationManoeuvre>::value,
              "NavigationManoeuvre is used for interfacing");

extern "C"
struct NavigationManoeuvreFrenetTrihedron {
  XYZ binormal;
  XYZ normal;
  XYZ tangent;
};

static_assert(std::is_pod<NavigationManoeuvreFrenetTrihedron>::value,
              "NavigationManoeuvreFrenetTrihedron is used for interfacing");

extern "C"
struct Origin {
  bool reference_part_is_at_origin;
  bool reference_part_is_unmoving;
  uint32_t reference_part_id;
  XYZ main_body_centre_in_world;
};

static_assert(std::is_pod<Origin>::value,
              "Origin is used for interfacing");

extern "C"
struct QP {
  XYZ q;
  XYZ p;
};

static_assert(std::is_pod<QP>::value,
              "QP is used for interfacing");

extern "C"
struct Status {
  int error;
};

static_assert(std::is_pod<Status>::value,
              "Status is used for interfacing");

extern "C"
struct WXYZ {
  double w;
  double x;
  double y;
  double z;
};

static_assert(std::is_pod<WXYZ>::value,
              "WXYZ is used for interfacing");

extern "C"
struct XY {
  double x;
  double y;
};

static_assert(std::is_pod<XY>::value,
              "XY is used for interfacing");

extern "C" PRINCIPIA_DLL
void CDECL principia__AdvanceTime(
    Plugin* const plugin,
    double const t,
    double const planetarium_rotation);

extern "C" PRINCIPIA_DLL
void CDECL principia__CatchUpLaggingVessels(
    Plugin* const plugin,
    Iterator** const collided_vessels);

extern "C" PRINCIPIA_DLL
QP CDECL principia__CelestialFromParent(
    Plugin const* const plugin,
    int const celestial_index);

extern "C" PRINCIPIA_DLL
double CDECL principia__CelestialInitialRotationInDegrees(
    Plugin const* const plugin,
    int const celestial_index);

extern "C" PRINCIPIA_DLL
WXYZ CDECL principia__CelestialRotation(
    Plugin const* const plugin,
    int const index);

extern "C" PRINCIPIA_DLL
double CDECL principia__CelestialRotationPeriod(
    Plugin const* const plugin,
    int const celestial_index);

extern "C" PRINCIPIA_DLL
WXYZ CDECL principia__CelestialSphereRotation(
    Plugin const* const plugin);

extern "C" PRINCIPIA_DLL
QP CDECL principia__CelestialWorldDegreesOfFreedom(
    Plugin const* const plugin,
    int const index,
    Origin const origin,
    double const time);

extern "C" PRINCIPIA_DLL
void CDECL principia__ClearTargetVessel(
    Plugin* const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__ClearWorldRotationalReferenceFrame(
    Plugin* const plugin);

extern "C" PRINCIPIA_DLL
double CDECL principia__CurrentTime(
    Plugin const* const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeletePlugin(
    Plugin const** const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeleteString(
    char const** const native_string);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeleteU16String(
    char16_t const** const native_string);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeserializePluginHexadecimal(
    char const* const serialization,
    int const serialization_size,
    PushDeserializer** const deserializer,
    Plugin const** const plugin,
    char const* const compressor);

extern "C" PRINCIPIA_DLL
void CDECL principia__EndInitialization(
    Plugin* const plugin);

extern "C" PRINCIPIA_DLL
Status CDECL principia__ExternalFlowFreefall(
    Plugin const* const plugin,
    int const central_body_index,
    QP const world_body_centred_initial_degrees_of_freedom,
    double const t_initial,
    double const t_final,
    QP* const world_body_centred_final_degrees_of_freedom);

extern "C" PRINCIPIA_DLL
Status CDECL principia__ExternalGetNearestPlannedCoastDegreesOfFreedom(
    Plugin const* const plugin,
    int const central_body_index,
    char const* const vessel_guid,
    int const manoeuvre_index,
    XYZ const world_body_centred_reference_position,
    QP* const world_body_centred_nearest_degrees_of_freedom);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanAppend(
    Plugin const* const plugin,
    char const* const vessel_guid,
    Burn const burn);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanCreate(
    Plugin const* const plugin,
    char const* const vessel_guid,
    double const final_time,
    double const mass_in_tonnes);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanDelete(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanExists(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
AdaptiveStepParameters CDECL principia__FlightPlanGetAdaptiveStepParameters(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
double CDECL principia__FlightPlanGetActualFinalTime(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
double CDECL principia__FlightPlanGetDesiredFinalTime(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__FlightPlanGetGuidance(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const index);

extern "C" PRINCIPIA_DLL
double CDECL principia__FlightPlanGetInitialTime(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
NavigationManoeuvre CDECL principia__FlightPlanGetManoeuvre(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const index);

extern "C" PRINCIPIA_DLL
NavigationManoeuvreFrenetTrihedron CDECL principia__FlightPlanGetManoeuvreFrenetTrihedron(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const index);

extern "C" PRINCIPIA_DLL
int CDECL principia__FlightPlanNumberOfManoeuvres(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
int CDECL principia__FlightPlanNumberOfSegments(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanRemoveLast(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanRenderedApsides(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const celestial_index,
    XYZ const sun_world_position,
    Iterator** const apoapsides,
    Iterator** const periapsides);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanRenderedClosestApproaches(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    Iterator** const closest_approaches);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanRenderedNodes(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    Iterator** const ascending,
    Iterator** const descending);

extern "C" PRINCIPIA_DLL
Iterator* CDECL principia__FlightPlanRenderedSegment(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    int const index);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanReplaceLast(
    Plugin const* const plugin,
    char const* const vessel_guid,
    Burn const burn);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanSetAdaptiveStepParameters(
    Plugin const* const plugin,
    char const* const vessel_guid,
    AdaptiveStepParameters const adaptive_step_parameters);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanSetDesiredFinalTime(
    Plugin const* const plugin,
    char const* const vessel_guid,
    double const final_time);

extern "C" PRINCIPIA_DLL
void CDECL principia__ForgetAllHistoriesBefore(
    Plugin* const plugin,
    double const t);

extern "C" PRINCIPIA_DLL
void CDECL principia__FreeVesselsAndPartsAndCollectPileUps(
    Plugin* const plugin,
    double const delta_t);

extern "C" PRINCIPIA_DLL
PileUpFuture* CDECL principia__FutureCatchUpVessel(
    Plugin* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__FutureWaitForVesselToCatchUp(
    Plugin* const plugin,
    PileUpFuture** const future,
    Iterator** const collided_vessels);

extern "C" PRINCIPIA_DLL
int CDECL principia__GetBufferDuration();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetBufferedLogging();

extern "C" PRINCIPIA_DLL
QP CDECL principia__GetPartActualDegreesOfFreedom(
    Plugin const* const plugin,
    uint32_t const part_id,
    Origin const origin);

extern "C" PRINCIPIA_DLL
int CDECL principia__GetStderrLogging();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetSuppressedLogging();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetVerboseLogging();

extern "C" PRINCIPIA_DLL
void CDECL principia__GetVersion(
    char const** const build_date,
    char const** const version);

extern "C" PRINCIPIA_DLL
bool CDECL principia__HasEncounteredApocalypse(
    Plugin* const plugin,
    char const** const details);

extern "C" PRINCIPIA_DLL
bool CDECL principia__HasVessel(
    Plugin* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__IncrementPartIntrinsicForce(
    Plugin* const plugin,
    uint32_t const part_id,
    XYZ const force_in_kilonewtons);

extern "C" PRINCIPIA_DLL
void CDECL principia__InitializeEphemerisParameters(
    Plugin* const plugin,
    ConfigurationAccuracyParameters const accuracy_parameters,
    ConfigurationFixedStepParameters const fixed_step_parameters);

extern "C" PRINCIPIA_DLL
void CDECL principia__InitializeHistoryParameters(
    Plugin* const plugin,
    ConfigurationFixedStepParameters const parameters);

extern "C" PRINCIPIA_DLL
void CDECL principia__InitializePsychohistoryParameters(
    Plugin* const plugin,
    ConfigurationAdaptiveStepParameters const parameters);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertCelestialAbsoluteCartesian(
    Plugin* const plugin,
    int const celestial_index,
    int const* const parent_index,
    BodyParameters const body_parameters,
    char const* const x,
    char const* const y,
    char const* const z,
    char const* const vx,
    char const* const vy,
    char const* const vz);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertCelestialJacobiKeplerian(
    Plugin* const plugin,
    int const celestial_index,
    int const* const parent_index,
    BodyParameters const body_parameters,
    KeplerianElements const* const keplerian_elements);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertOrKeepVessel(
    Plugin* const plugin,
    char const* const vessel_guid,
    char const* const vessel_name,
    int const parent_index,
    bool const loaded,
    bool* const inserted);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertOrKeepLoadedPart(
    Plugin* const plugin,
    uint32_t const part_id,
    char const* const name,
    double const mass_in_tonnes,
    char const* const vessel_guid,
    int const main_body_index,
    QP const main_body_world_degrees_of_freedom,
    QP const part_world_degrees_of_freedom,
    double const delta_t);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertUnloadedPart(
    Plugin* const plugin,
    uint32_t const part_id,
    char const* const name,
    char const* const vessel_guid,
    QP const from_parent);

extern "C" PRINCIPIA_DLL
bool CDECL principia__IteratorAtEnd(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
void CDECL principia__IteratorDelete(
    Iterator** const iterator);

extern "C" PRINCIPIA_DLL
QP CDECL principia__IteratorGetDiscreteTrajectoryQP(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
double CDECL principia__IteratorGetDiscreteTrajectoryTime(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__IteratorGetDiscreteTrajectoryXYZ(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
Iterator* CDECL principia__IteratorGetRP2LinesIterator(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
XY CDECL principia__IteratorGetRP2LineXY(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
char const* CDECL principia__IteratorGetVesselGuid(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
void CDECL principia__IteratorIncrement(
    Iterator* const iterator);

extern "C" PRINCIPIA_DLL
void CDECL principia__IteratorReset(
    Iterator* const iterator);

extern "C" PRINCIPIA_DLL
int CDECL principia__IteratorSize(
    Iterator const* const iterator);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogError(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogFatal(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogInfo(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogWarning(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__MonitorSetName(
    int const i,
    char const* const name);

extern "C" PRINCIPIA_DLL
void CDECL principia__MonitorStart(
    int const i);

extern "C" PRINCIPIA_DLL
void CDECL principia__MonitorStop(
    int const i);

extern "C" PRINCIPIA_DLL
WXYZ CDECL principia__NavballOrientation(
    Plugin const* const plugin,
    XYZ const sun_world_position,
    XYZ const ship_world_position);

extern "C" PRINCIPIA_DLL
NavigationFrame* CDECL principia__NewNavigationFrame(
    Plugin const* const plugin,
    NavigationFrameParameters const parameters);

extern "C" PRINCIPIA_DLL
Plugin* CDECL principia__NewPlugin(
    char const* const game_epoch,
    char const* const solar_system_epoch,
    double const planetarium_rotation_in_degrees);

extern "C" PRINCIPIA_DLL
Planetarium* CDECL principia__PlanetariumCreate(
    Plugin const* const plugin,
    XYZ const sun_world_position,
    XYZ const xyz_opengl_camera_x_in_world,
    XYZ const xyz_opengl_camera_y_in_world,
    XYZ const xyz_opengl_camera_z_in_world,
    XYZ const xyz_camera_position_in_world,
    double const focal,
    double const field_of_view);

extern "C" PRINCIPIA_DLL
void CDECL principia__PlanetariumDelete(
    Planetarium const** const planetarium);

extern "C" PRINCIPIA_DLL
Iterator* CDECL principia__PlanetariumPlotFlightPlanSegment(
    Planetarium const* const planetarium,
    Plugin const* const plugin,
    int const method,
    char const* const vessel_guid,
    int const index);

extern "C" PRINCIPIA_DLL
Iterator* CDECL principia__PlanetariumPlotPrediction(
    Planetarium const* const planetarium,
    Plugin const* const plugin,
    int const method,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
Iterator* CDECL principia__PlanetariumPlotPsychohistory(
    Planetarium const* const planetarium,
    Plugin const* const plugin,
    int const method,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__PrepareToReportCollisions(
    Plugin* const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__RenderedPredictionApsides(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const celestial_index,
    XYZ const sun_world_position,
    Iterator** const apoapsides,
    Iterator** const periapsides);

extern "C" PRINCIPIA_DLL
void CDECL principia__RenderedPredictionClosestApproaches(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    Iterator** const closest_approaches);

extern "C" PRINCIPIA_DLL
void CDECL principia__RenderedPredictionNodes(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    Iterator** const ascending,
    Iterator** const descending);

extern "C" PRINCIPIA_DLL
void CDECL principia__ReportGroundCollision(
    Plugin const* const plugin,
    uint32_t const part_id);

extern "C" PRINCIPIA_DLL
void CDECL principia__ReportPartCollision(
    Plugin const* const plugin,
    uint32_t const part1_id,
    uint32_t const part2_id);

extern "C" PRINCIPIA_DLL
char const* CDECL principia__SayHello();

extern "C" PRINCIPIA_DLL
char const* CDECL principia__SerializePluginHexadecimal(
    Plugin const* const plugin,
    PullSerializer** const serializer,
    char const* const compressor);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetBufferDuration(
    int const seconds);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetBufferedLogging(
    int const max_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetMainBody(
    Plugin* const plugin,
    int const index);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPartApparentDegreesOfFreedom(
    Plugin* const plugin,
    uint32_t const part_id,
    QP const degrees_of_freedom,
    QP const main_body_degrees_of_freedom);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPlottingFrame(
    Plugin* const plugin,
    NavigationFrame** const navigation_frame);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetStderrLogging(
    int const min_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetSuppressedLogging(
    int const min_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetTargetVessel(
    Plugin* const plugin,
    char const* const vessel_guid,
    int const reference_body_index);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetVerboseLogging(
    int const level);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetWorldRotationalReferenceFrame(
    Plugin* const plugin,
    int const index);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__UnmanageableVesselVelocity(
    Plugin const* const plugin,
    QP const degrees_of_freedom,
    int const celestial_index);

extern "C" PRINCIPIA_DLL
void CDECL principia__UpdateCelestialHierarchy(
    Plugin const* const plugin,
    int const celestial_index,
    int const parent_index);

extern "C" PRINCIPIA_DLL
void CDECL principia__UpdatePrediction(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselBinormal(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
QP CDECL principia__VesselFromParent(
    Plugin const* const plugin,
    int const parent_index,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
AdaptiveStepParameters CDECL principia__VesselGetPredictionAdaptiveStepParameters(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselNormal(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__VesselSetPredictionAdaptiveStepParameters(
    Plugin const* const plugin,
    char const* const vessel_guid,
    AdaptiveStepParameters const adaptive_step_parameters);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselTangent(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselVelocity(
    Plugin const* const plugin,
    char const* const vessel_guid);

